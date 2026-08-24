--1
select Person.Person.FirstName, Person.Person.LastName
from Person.Person LEFT JOIN Person.EmailAddress on Person.Person.BusinessEntityID = Person.EmailAddress.BusinessEntityID
where Person.EmailAddress.EmailAddress IS NULL

--2
select Person.Person.FirstName, Person.Person.LastName
from Person.Person
where Person.Person.LastName LIKE '_a______%'

--3
select distinct p1.FirstName, p1.LastName
from Person.Person as p1 INNER JOIN Person.Person as p2
on p1.FirstName = p2.FirstName AND p1.LastName = p2.LastName AND p1.BusinessEntityID != p2.BusinessEntityID

--4
select Person.Person.FirstName, Person.Person.LastName
from Person.Person
order by Person.Person.LastName asc, Person.Person.ModifiedDate desc, Person.Person.MiddleName asc

--5
select p1.FirstName, p1.LastName, p3.Name
from Person.Person as p1 
LEFT JOIN Person.PersonPhone as p2 
on p1.BusinessEntityID = p2.BusinessEntityID
LEFT JOIN Person.PhoneNumberType as p3
on p2.PhoneNumberTypeID = p3.PhoneNumberTypeID

--6
-- ერთი ერთთან, ერთი ერთთან, მრავალი მრავალთან

--7
select p.FirstName, p.LastName
from Person.Person as p
where (p.FirstName LIKE 'A%' OR p.FirstName LIKE 'B%' AND p.LastName LIKE 'B%')
AND p.MiddleName LIKE 'A%'
AND (p.EmailPromotion = 1 OR p.EmailPromotion = 2)

-- მოცემული კოდი Person.Person ცხრილიდან ამოიღებს ისეთი ადამიანების სახელსა და გვარებს, რომელთა
-- შუა სახელიც იწყება A-ზე, რომელთა EmailPromotion არის 1 ან 2 და რომელთა
-- სახელი და გვარი ასრულებს შემდეგ პირობას: სახელი და გვარი იწყება B-ზე ან სახელი იწყება A-ზე.