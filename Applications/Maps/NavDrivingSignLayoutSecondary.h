//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface NavDrivingSignLayoutSecondary
{
}

+ (id)sharedDrivingSecondarySignLayout;	// IMP=0x0040000000c55bc2
- (long long)maneuverViewPositionForSign:(id)arg1;	// IMP=0x0040000000c55d22
- (CDStruct_a1deb1f2)maneuverViewArrowMetricsForSign:(id)arg1;	// IMP=0x0010000000c55cda
- (_Bool)forceHideShieldViewForSign:(id)arg1;	// IMP=0x0010000000c55cd2
- (MISSING_TYPE *)maneuverViewSizeForSign: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000c55cbc
- (double)baselineMarginBetweenLabelsForSign:(id)arg1;	// IMP=0x0010000000c55cae
- (double)textBottomMarginForSign:(id)arg1;	// IMP=0x0010000000c55ca0
- (double)textTopMarginForSign:(id)arg1;	// IMP=0x0010000000c55c92
- (long long)navSignView:(id)arg1 inlineShieldSizeForMajorText:(_Bool)arg2;	// IMP=0x0010000000c55c87
- (long long)navSignView:(id)arg1 maxNumberOfTotalLinesForMajorText:(_Bool)arg2;	// IMP=0x0010000000c55c7c
- (long long)navSignView:(id)arg1 maxNumberOfLinesWithLongestAlternativeForMajorText:(_Bool)arg2;	// IMP=0x0010000000c55c71
- (long long)navSignView:(id)arg1 maxNumberOfLinesWithPreferredFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000c55c66
- (id)navSignView:(id)arg1 preferredFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000c55c2d
- (_Bool)navSignView:(id)arg1 shouldAlignToLeadingForMajorText:(_Bool)arg2;	// IMP=0x0010000000c55c25
- (double)minimumHeightForSign:(id)arg1;	// IMP=0x0010000000c55c17

@end

