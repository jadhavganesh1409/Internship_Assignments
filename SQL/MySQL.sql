DROP TABLE IF EXISTS profile;
DROP TABLE IF EXISTS user;
DROP TABLE IF EXISTS users;

-- Create Table
CREATE TABLE user ( id int unsigned NOT NULL auto_increment, username varchar(100) NOT NULL, email varchar(100) NOT NULL, PRIMARY KEY (id)
);


-- Insert Values
INSERT INTO user ( username, email ) VALUES ( 'noobcoder', 'noobocoder@gmail.com' );
INSERT INTO user ( username, email ) VALUES ( 'gayatri', 'gayatri@gmail.com' );
INSERT INTO user ( username, email ) VALUES ( 'gg', 'gayatri@gmail.com' );
INSERT INTO user ( username, email ) VALUES ( 'shyn', 'shyn@gmail.com' );
INSERT INTO user ( username, email ) VALUES ( 'ravi', 'ravi@gmail.com' );
INSERT INTO user ( username, email ) VALUES ( 'prasad', 'prasad@gmail.com' );

DROP TABLE IF EXISTS car;

CREATE TABLE car( car_id INT UNSIGNED NOT NULL PRIMARY KEY auto_increment, name VARCHAR(20),price DECIMAL(8,2));

INSERT INTO car ( name, price ) VALUES ( 'Audi A1', '20000' );
INSERT INTO car ( name, price ) VALUES ( 'Audi A1', '40000' );
INSERT INTO car ( name, price ) VALUES ( 'Audi A2', '15000' );
INSERT INTO car ( name, price ) VALUES ( 'Audi A2', '40000' );
 
-- Select all values 
SELECT * FROM user;
SELECT * FROM car;

-- Select Distinct Values
SELECT DISTINCT name, price FROM car;
SELECT DISTINCT email FROM user;

-- Select with LIKE(%)
SELECT * FROM user WHERE email LIKE "%ga%";
SELECT * FROM user WHERE username LIKE "%i";
SELECT * FROM user WHERE username LIKE "n%";
SELECT * FROM user WHERE username LIKE "noo_coder";

-- Select with Alias(As)
SELECT username AS name FROM user;

-- ORDER BY
SELECT * FROM car ORDER BY price;

SELECT * FROM car ORDER BY price LIMIT 2;

-- GROUP BY
SELECT name FROM car GROUP BY name;

-- ALTER TABLE 
ALTER TABLE user ADD COLUMN password varchar(20) NOT NULL;

--  Renaming table
RENAME TABLE user TO users;

-- BULK UPDATE
UPDATE users SET username = (CASE id WHEN 1 THEN 'Ganesh' WHEN 4 THEN 'Shayan' WHEN 5 THEN 'Ravi' END) WHERE id IN (1,4,5);

CREATE TABLE profile (profile_id int UNSIGNED NOT NULL PRIMARY KEY auto_increment,company varchar(20) NOT NULL, position varchar(20) NOT NULL,user_id int unsigned, FOREIGN KEY(user_id) REFERENCES users(id));

INSERT INTO profile (company,position,user_id) VALUES("Bluepineapple","Cloud Analyst",1);
INSERT INTO profile (company,position,user_id) VALUES("VERITAS","Analyst",2);
INSERT INTO profile (company,position,user_id) VALUES("Axtria","Data Analyst",4);
INSERT INTO profile (company,position,user_id) VALUES("TechVerito","SDE-I",5);

-- Select from two tables
SELECT * FROM users,profile where users.id = profile.user_id \G;
SELECT * FROM users,profile where users.id = profile.user_id AND users.username="Ganesh";

-- JOINS 
select * from profile LEFT JOIN users on profile.user_id=users.id ORDER BY users.username;

select * from profile INNER JOIN users on profile.user_id=users.id ORDER BY users.username;

select * from profile RIGHT JOIN users on profile.user_id=users.id ORDER BY users.username;