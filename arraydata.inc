;;; arraydata.inc

;; TODO: Is this much data even necessary?
unitSoldierTypeA:
.db $0001							; Ally or Enemy | ID 1B
.db	$0000							; Start y/x 1B
.db	$0000							; Current y/x 1B
.db $6300							; Max HP | Current HP 1B
.db $1000							; Strength/Weaknesses | Terrain Limitations 1B

unitSoldierTypeB:
.db $0002							; Ally or Enemy | ID 1B
.db	$0000							; Start y/x 1B
.db	$0000							; Current y/x 1B
.db $4300							; Max HP | Current HP 1B
.db $2000							; Strength/Weaknesses | Terrain Limitations 1B

unitTankTypeA:
.db $0011							; Ally or Enemy | ID 1B
.db	$0000							; Start y/x 1B
.db	$0000							; Current y/x 1B
.db $6300							; Max HP | Current HP 1B
.db $2000							; Strength/Weaknesses | Terrain Limitations 1B

unitTankTypeB:
.db $0012							; Ally or Enemy | ID 1B
.db	$0000							; Start y/x 1B
.db	$0000							; Current y/x 1B
.db $4300							; Max HP | Current HP 1B
.db $3000							; Strength/Weaknesses | Terrain Limitations 1B

unitAirTypeA:
.db $0021							; Ally or Enemy | ID 1B
.db	$0000							; Start y/x 1B
.db	$0000							; Current y/x 1B
.db $6300							; Max HP | Current HP 1B
.db $3000							; Strength/Weaknesses | Terrain Limitations 1B

unitAirTypeB:
.db $0022							; Ally or Enemy | ID 1B
.db	$0000							; Start y/x 1B
.db	$0000							; Current y/x 1B
.db $4300							; Max HP | Current HP 1B
.db $4000							; Strength/Weaknesses | Terrain Limitations 1B

