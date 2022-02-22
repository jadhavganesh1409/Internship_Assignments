import React,{useState} from 'react';
import { carData } from '../carData';
import { CarDetails } from './CarDetails';

export const CarList = () => {
    const styles={
        columns:{
            display:'flex',
            padding:'10px',
            margin:'60px 10px',
            justifyContent:'space-between'
        },
        list:{
            textAlign:'center',
            marginLeft:'10px',
            width:'25%',
            // border:'1px solid black'
        },
        carButton:{
            backgroundColor:'#ECECEC',
            fontSize:'20px',
            padding:'5px 20px',
            marginBottom:'5px',
            cursor:'pointer',
            width:'100%',
            textTransform:'capitalize',
            borderRadius:'10px'
        },

        displayDetails:{
            width:'70%'
        }
    }

    const [active,setActive] = useState(carData[0]);

    function changeBackground(e) {
        e.target.style.background = 'orange';
      }
    
      function change(e) {
        e.target.style.background = '#ECECEC';
      }
    return (
        
      <div style={styles.columns}>
          <div style={styles.list}>
            {carData.map(car=> (
                <div>
                    <button style={styles.carButton} onMouseOver={changeBackground} onMouseOut = {change} onClick={()=>setActive({...car})}>{car.Name}</button>
                </div>
                
            ))}
        </div>
        <div style={styles.displayDetails}>                
             <CarDetails {...active}/>
        </div>
      </div>
    
    
  )
}
