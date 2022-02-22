import React from 'react';
import { LinkContainer } from 'react-router-bootstrap';
import { Navbar,Nav,Container } from 'react-bootstrap';

const Header = () => {
  const styles = {
    navbar:{
      position:'fixed',
      top:'0',
      overFlow:'hidden',
      width:"100%"
    }
  }
  return (
    <div style={styles.navbar}>
        <Navbar bg="dark" variant="dark" >
          <Container>
            <Navbar.Brand>CarInfo</Navbar.Brand>
              <Nav className="me-auto">
              <LinkContainer to="/">
                  <Nav.Link>Home</Nav.Link>
                </LinkContainer>
                
                <LinkContainer to="/CarList">
                  <Nav.Link>Car List</Nav.Link>
                </LinkContainer>
              </Nav>
            </Container>
    </Navbar>

    </div>
      //   <div>
  //     <ul>
  //       <li><Link to="/CarList">ABC</Link></li>
  //     </ul>
  //  </div>
  )
}

export default Header