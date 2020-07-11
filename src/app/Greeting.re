[@react.component]
let make = (~name) =>
  <div> {ReasonReact.string("May be  or Hello! " ++ name)} </div>;