def main : IO Unit := do
  let t <- IO.currentTimeMillis
  println! "time {t}"
