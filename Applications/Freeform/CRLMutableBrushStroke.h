//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLColor, CRLStrokePattern;

@interface CRLMutableBrushStroke
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0020000000554a91
- (void)setPatternPropertiesFromStroke:(id)arg1;	// IMP=0x0010000000554a7f
- (void)setPropertiesFromStroke:(id)arg1;	// IMP=0x0010000000554a6d
@property(copy, nonatomic) CRLStrokePattern *pattern;
@property(nonatomic) unsigned long long join;
@property(nonatomic) double miterLimit;
@property(nonatomic) unsigned long long cap;
@property(nonatomic) double actualWidth;
@property(nonatomic) double width;
@property(copy, nonatomic) CRLColor *color;

@end

