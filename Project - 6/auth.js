
  import { initializeApp } from "https://www.gstatic.com/firebasejs/10.12.0/firebase-app.js";
  import { getAnalytics } from "https://www.gstatic.com/firebasejs/10.12.0/firebase-analytics.js";
  
  const firebaseConfig = {
    apiKey: "AIzaSyD0NSjRnMvi_gyOm97jHclg87GB6SBmWfQ",
    authDomain: "nebula-coders.firebaseapp.com",
    databaseURL: "https://nebula-coders-default-rtdb.firebaseio.com",
    projectId: "nebula-coders",
    storageBucket: "nebula-coders.appspot.com",
    messagingSenderId: "249264299475",
    appId: "1:249264299475:web:676e01de2db495920ae326",
    measurementId: "G-DLZVMXXWVF"
  };

  // Initialize Firebase
  const app = initializeApp(firebaseConfig);
  const analytics = getAnalytics(app);
