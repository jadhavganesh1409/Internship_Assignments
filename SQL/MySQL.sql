DROP TABLE IF EXISTS user;

-- Create Table
CREATE TABLE user ( id int unsigned NOT NULL auto_increment, username varchar(100) NOT NULL, email varchar(100) NOT NULL, PRIMARY KEY (id)
);


-- Insert Values
INSERT INTO user ( username, email ) VALUES ( 'noobcoder', 'noobocoder@gmail.com' );
INSERT INTO user ( username, email ) VALUES ( 'gayatri', 'gayatri@gmail.com' );
INSERT INTO user ( username, email ) VALUES ( 'gg', 'gayatri@gmail.com' );
INSERT INTO user ( username, email ) VALUES ( 'shyn', 'shyn@gmail.com' );
INSERT INTO user ( username, email ) VALUES ( 'ravi', 'ravi@gmail.com' );

DROP TABLE IF EXISTS car;

CREATE TABLE car( car_id INT UNSIGNED NOT NULL PRIMARY KEY auto_increment, name VARCHAR(20),price DECIMAL(8,2));

INSERT INTO car ( name, price ) VALUES ( 'Audi A1', '20000' );
INSERT INTO car ( name, price ) VALUES ( 'Audi A1', '15000' );
INSERT INTO car ( name, price ) VALUES ( 'Audi A2', '40000' );
INSERT INTO car ( name, price ) VALUES ( 'Audi A2', '40000' );
 


-- Select all values 
SELECT * FROM user;
SELECT * FROM car;

-- Select Distinct Values
SELECT DISTINCT name, price FROM car;
SELECT DISTINCT email FROM user;

