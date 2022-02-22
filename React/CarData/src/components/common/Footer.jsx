import React from 'react';

const Footer = () => {
    const styles = {
        footer:{
            marginTop:'30px',
            position:'fixed',
            overFlow:'hidden',
            bottom:'0',
            backgroundColor:'skyblue'
        },

        footerDiv:{
            padding:'30px',
            textAlign:'center'
        }
    }
  return (
    <div style={styles.footer}>
        <div style={styles.footerDiv}>
        A car is a wheeled motor vehicle used for transportation. Most definitions of cars say that they run primarily on roads, seat one to eight people, have four wheels, and mainly transport people rather than goods. Cars came into global use during the 20th century, and developed economies depend on them</div>
    </div>
  )
}




export default Footer