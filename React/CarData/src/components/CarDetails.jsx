import React from 'react';
import { Table } from 'react-bootstrap';

export const CarDetails = ({...data}) => {

  return (
    <div style={{display:'flex', padding:'10px',textAlign:'center'}}>
        <div style={{width:'50%'}}>
          <h3 style={{textTransform:'capitalize'}}>{data.Name}</h3>
          <img style={{ border:'4px solid #ECECEC',borderRadius:'12px',width:'400px'}} src={data.img_url} alt="" width={400}/>
          <figcaption>Image: <span style={{textTransform:'capitalize'}}> {data.Name}</span></figcaption>
        </div>
        <div style={{marginLeft:'30px',width:'50%'}}>
              <h3 style={{textDecoration:'underline'}}>Details:</h3>
              <div style={{textAlign:'left',paddingLeft:'20px',lineHeight:'20px'}}>
                <Table striped bordered hover size="sm">
                  <tbody>
                    <tr>
                      <th>Miles/Gallon</th>
                      <td>{data.Miles_per_Gallon}</td>
                    </tr>
                    <tr>
                      <th>Cylinders</th>
                      <td>{data.Cylinders}</td>
                    </tr>
                    <tr>
                      <th>Displacement</th>
                      <td>{data.Displacement}</td>
                    </tr>
                    <tr>
                      <th>HorsePower</th>
                      <td>{data.Horsepower}</td>
                    </tr>
                    <tr>
                      <th>Weight in lbs</th>
                      <td>{data.Weight_in_lbs}</td>
                    </tr>
                    <tr>
                      <th>Acceleration</th>
                      <td>{data.Acceleration}</td>
                    </tr>
                    <tr>
                      <th>Year</th>
                      <td>{data.Year}</td>
                    </tr>
                    <tr>
                      <th>Origin</th>
                      <td>{data.Origin}</td>
                    </tr>
                  </tbody>
                </Table>
              </div>
        </div>
    </div>
  )
}
