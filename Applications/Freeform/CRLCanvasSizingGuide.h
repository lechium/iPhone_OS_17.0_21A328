//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer;

@interface CRLCanvasSizingGuide
{
    struct CGRect mAlignmentFrame;	// 72 = 0x48
    CALayer *mLayer;	// 104 = 0x68
    _Bool mIsHorizontal;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0020000000197d4d
- (id)description;	// IMP=0x0010000000197cf8
- (id)renderableWithICC:(id)arg1;	// IMP=0x0010000000197b46
- (_Bool)isAssociatedContentVisibleInUnscaledRect:(struct CGRect)arg1;	// IMP=0x0010000000197b08
- (id)initWithType:(long long)arg1 frame:(struct CGRect)arg2;	// IMP=0x0010000000197a7c

@end

