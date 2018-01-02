
-- https://www.codewars.com/kata/555eded1ad94b00403000071/solutions/haskell

import Text.Printf

seriesSum :: Integer -> String
seriesSum 0 = "0"
seriesSum n = toStrHundreths (sum [(fromIntegral 1 / fromIntegral(x * 3 + 1))::Double |  x <- [0..n]])


pow :: Int->Int->Int
pow a b = fromIntegral (foldr (*) 1 (replicate b a))

toStrHundreths :: (PrintfArg a) => a -> String
toStrHundreths a = printf "%.2f" a --printf function rocks




 