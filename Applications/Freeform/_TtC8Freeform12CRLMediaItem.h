//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC8Freeform12CRLMediaItem
{
    MISSING_TYPE *isLooping;	// 1265394036 = 0x4b6c6174
}

+ (float)defaultRoundedCornerAmount;	// IMP=0x00200000009d4ab0
- (id)commandToSetLoopingEnabled:(_Bool)arg1;	// IMP=0x00400000009d4bb0
- (id)commandToSetRoundedCornersEnabled:(_Bool)arg1;	// IMP=0x00100000009d4ec0
@property(nonatomic) _Bool isLooping; // @synthesize isLooping;
@property(nonatomic, readonly) float roundedCornerAmount;
@property(nonatomic, readonly) _Bool hasRoundedCorners;
@property(nonatomic, readonly) _Bool supportsTogglingLooping;
@property(nonatomic, readonly) _Bool supportsTogglingShadowAndRoundedCorners;
- (void)takePropertiesFromReplacedBoardItem:(id)arg1;	// IMP=0x00100000009d4a40
@property(nonatomic, readonly) _Bool isSpatial;
@property(nonatomic, readonly) _Bool canBeReplaced;
@property(nonatomic, readonly) struct CGSize mediaRawPixelSize;
@property(nonatomic, readonly) _Bool canResetMediaSize;

@end

