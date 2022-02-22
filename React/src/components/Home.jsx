import React from 'react';
import { Carousel } from 'react-bootstrap';

export const Home = () => {
  return (
    <div style={{height:'100px',marginTop:'65px'}}>
       <Carousel>
            <Carousel.Item style={{'height':"450px",paddingLeft:'25px',paddingRight:'25px'}} >
                <img
                className="d-block w-100" style={{objectFit:'cover'}}
                src="https://images.unsplash.com/photo-1628188454080-78b0e5decb46?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80"
                alt="First slide"
                />
                <Carousel.Caption>
                <h3>Jaguar XK140</h3>
                <p>The Jaguar XK140 is a sports car manufactured by Jaguar between 1954 and 1957 as the successor to the XK120.</p>
                </Carousel.Caption>
            </Carousel.Item>
            <Carousel.Item style={{'height':"450px",paddingLeft:'25px',paddingRight:'25px'}}>
                <img
                className="d-block w-100" style={{objectFit:'cover'}}
                src="https://images.unsplash.com/photo-1526284059721-5519814a2274?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80"
                alt="Second slide"
                />

                <Carousel.Caption>
                <h3>1932 Ford</h3>
                <p>The term 1932 Ford may refer to three models of automobile produced by Ford Motors between 1932 and 1934: the Model B, the Model 18, and the Model 46</p>
                </Carousel.Caption>
            </Carousel.Item>
            <Carousel.Item style={{'height':"450px",paddingLeft:'25px',paddingRight:'25px'}}>
                <img
                className="d-block w-100" style={{objectFit:'cover'}}
                src="https://images.unsplash.com/photo-1517491093410-ab48c47bc750?ixlib=rb-1.2.1&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=870&q=80"
                alt="Third slide"
                />

                <Carousel.Caption>
                <h3>Mercury Capri</h3>
                <p>Capri is a nameplate marketed by the Lincoln-Mercury division of Ford Motor Company</p>
                </Carousel.Caption>
            </Carousel.Item>
        </Carousel>
    </div>
    
  )
}
