--1
INSERT INTO Person.ContactType (Name, ModifiedDate)
VALUES ('Data Coordinator', GETDATE());

--2
INSERT INTO Person.AddressType (Name)
VALUES ('Studying Center');

--3
INSERT INTO Person.BusinessEntity (rowguid, ModifiedDate) VALUES (NEWID(), GETDATE());
DECLARE @LukasID INT = SCOPE_IDENTITY();

INSERT INTO Person.Person (BusinessEntityID, PersonType, FirstName, LastName)
VALUES (@LukasID, 'EM', 'Luka', 'Tasoshvili');

INSERT INTO Person.PersonPhone (BusinessEntityID, PhoneNumber, PhoneNumberTypeID)
VALUES (@LukasID, '598-24-37-50', 1);

--4
CREATE TABLE Person.ContactType_Archive (
    ContactTypeID INT,
    Name NVARCHAR(50)
);

INSERT INTO Person.ContactType_Archive (ContactTypeID, Name)
SELECT ContactTypeID, Name 
FROM Person.ContactType;

--5
BEGIN TRANSACTION;

INSERT INTO Person.AddressType (Name) VALUES ('Temporary Office');

IF @@ERROR = 0
    COMMIT;
ELSE
    ROLLBACK;
-- COMMIT ინახავს ცვლილებებს ბაზაში სამუდამოდ.
-- ROLLBACK ცვლილებებს აბრუნებს უკან - ტრანზაქციამდელ მდგომარეობაში.

--UNOMRO
SELECT @@TRANCOUNT AS CurrentTransactionCount;
-- გაზრდა - ერთით იზრდება როცა გავუშვებთ BEGIN TRANSACTION ბრძანებას.
-- შემცირება - ერთით შემცირდება როცა გავუშვებთ COMMIT-ს. ROLLBACK-ზე ხდება 0.

--6
UPDATE Person.Person
SET FirstName = 'Baqari'
WHERE BusinessEntityID = 1;

--7
UPDATE P
SET P.PersonType = 'SP'
FROM Person.Person AS P
JOIN Person.PersonPhone AS PP ON P.BusinessEntityID = PP.BusinessEntityID
WHERE PP.PhoneNumber LIKE '598%';

--8
DELETE FROM Person.PersonPhone
WHERE BusinessEntityID = 1 AND PhoneNumber = '598-24-37-50';

--9
DELETE FROM Person.BusinessEntity
WHERE BusinessEntityID = 1;

--10
GO
CREATE VIEW Person.v_PersonContactInfo AS
SELECT 
    P.FirstName, 
    P.LastName, 
    PP.PhoneNumber, 
    EA.EmailAddress
FROM Person.Person P
LEFT JOIN Person.PersonPhone PP ON P.BusinessEntityID = PP.BusinessEntityID
LEFT JOIN Person.EmailAddress EA ON P.BusinessEntityID = EA.BusinessEntityID;
GO
SELECT * FROM Person.v_PersonContactInfo;

--11
GO
CREATE VIEW Person.v_AddressTypePivot AS
SELECT 'Address Count' AS Category, [1] AS [Billing], [2] AS [Home]
FROM (
    SELECT AddressTypeID FROM Person.BusinessEntityAddress
) AS SourceTable
PIVOT (
    COUNT(AddressTypeID)
    FOR AddressTypeID IN ([1], [2])
) AS PivotTable;
GO