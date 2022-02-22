import './App.css';
import Header from './components/common/Header';
import Footer from './components/common/Footer';
import { CarList } from './components/CarList';
import { Home } from './components/Home';
import {
  BrowserRouter,
  Routes,
  Route
} from "react-router-dom";
// import { CarDetails } from './components/CarDetails';
// import { MainContent } from './MainContent';
function App() {
  return (
    // <div className="App">
       <BrowserRouter>
      <Header/>
     
            <Routes>
                <Route path="/" element={<Home />} />
                <Route  path="/CarList" element={<CarList />} /> 
            </Routes>
           
        <Footer/>
      </BrowserRouter>
      
    // </div>
  );
}

export default App;
