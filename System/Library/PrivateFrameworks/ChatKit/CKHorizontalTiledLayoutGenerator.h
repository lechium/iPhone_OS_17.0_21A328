//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CKHorizontalTiledLayoutGenerator
{
    struct CGPoint _origin;	// 8 = 0x8
    double _referenceHeight;	// 24 = 0x18
}

@property(nonatomic) double referenceHeight; // @synthesize referenceHeight=_referenceHeight;
- (_Bool)_addSpecialSequenceBlock:(CDStruct_1417b155 *)arg1;	// IMP=0x0000000000587ee0
- (_Bool)_addColumnWithTiles:(CDStruct_1417b155 *)arg1 imageFrames:(struct CGRect *)arg2 count:(long long)arg3;	// IMP=0x0000000000587d8d
- (void)_enumerateColumnFramesWithContiguousTiles:(CDStruct_1417b155 *)arg1 count:(long long)arg2 useMagneticGuidelines:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000587b20
- (_Bool)_addColumnWithContiguousTiles:(CDStruct_1417b155 *)arg1 count:(long long)arg2;	// IMP=0x00000000005877b6
- (_Bool)_isAtEndOfColumn;	// IMP=0x00000000005877a4
- (_Bool)_hasLeftSuboptimalColumn;	// IMP=0x0000000000587729
- (_Bool)_scanNonPanoramaSequence:(CDStruct_1417b155 *)arg1 count:(long long)arg2;	// IMP=0x00000000005875ce
- (_Bool)_scanSpecialSequenceColumn:(CDStruct_1417b155 *)arg1 count:(long long *)arg2;	// IMP=0x00000000005874a8
- (_Bool)_scanSpecialSequenceBlock:(CDStruct_1417b155 *)arg1;	// IMP=0x0000000000587491
- (_Bool)_scanTripletWithLargeLead:(CDStruct_1417b155 *)arg1;	// IMP=0x0000000000586f5f
- (_Bool)_parseSpecialSubsequenceWithColumnRequired:(_Bool)arg1 columnParsed:(_Bool *)arg2;	// IMP=0x0000000000586d1c
- (_Bool)_parseSpecialSequence;	// IMP=0x0000000000586ca2
- (_Bool)_parseSpecialTileTriplet;	// IMP=0x0000000000586b79
- (_Bool)_parseTileTriplet;	// IMP=0x000000000058642a
- (_Bool)_parseTilePair;	// IMP=0x000000000058629a
- (_Bool)_parseSingleTile;	// IMP=0x00000000005861a4
- (double)referenceDistanceForMagneticGuidelines;	// IMP=0x0000000000586192
- (_Bool)parseNextTiles;	// IMP=0x000000000058611d
- (void)willParseTiles;	// IMP=0x00000000005860d7

@end
