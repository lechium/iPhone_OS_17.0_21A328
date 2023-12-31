//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NavSignLayoutBase : NSObject
{
}

- (long long)navSignView:(id)arg1 inlineShieldSizeForMajorText:(_Bool)arg2;	// IMP=0x0020000000c54356
- (long long)navSignView:(id)arg1 textAlignmentForMajorText:(_Bool)arg2;	// IMP=0x0010000000c5434b
- (long long)navSignView:(id)arg1 maxNumberOfTotalLinesForMajorText:(_Bool)arg2;	// IMP=0x0010000000c54343
- (long long)navSignView:(id)arg1 maxNumberOfLinesWithLongestAlternativeForMajorText:(_Bool)arg2;	// IMP=0x0010000000c54338
- (long long)navSignView:(id)arg1 maxNumberOfLinesWithPreferredFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000c5432d
- (double)navSignView:(id)arg1 alternateFontLineSpacingForMajorText:(_Bool)arg2;	// IMP=0x0010000000c54311
- (id)navSignView:(id)arg1 alternateFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000c542bc
- (id)navSignView:(id)arg1 preferredFontForMajorText:(_Bool)arg2;	// IMP=0x0010000000c54283
- (_Bool)navSignView:(id)arg1 shouldAlignToTrailingForMajorText:(_Bool)arg2;	// IMP=0x0010000000c5427b
- (_Bool)navSignView:(id)arg1 shouldAlignToLeadingForMajorText:(_Bool)arg2;	// IMP=0x0010000000c54273
- (_Bool)shouldAlignMinorToMajorLabelTrailingForSign:(id)arg1;	// IMP=0x0010000000c5426b
- (_Bool)shouldAlignMinorToMajorLabelLeadingForSign:(id)arg1;	// IMP=0x0010000000c54263
- (double)labelBaselineToInlineShieldTopForSign:(id)arg1;	// IMP=0x0010000000c54255
- (double)baselineMarginBetweenLabelsForSign:(id)arg1;	// IMP=0x0010000000c54247
- (double)navSignView:(id)arg1 textTrailingMarginForMajorText:(_Bool)arg2;	// IMP=0x0010000000c54239
- (double)navSignView:(id)arg1 textLeadingMarginForMajorText:(_Bool)arg2;	// IMP=0x0010000000c5422b
- (double)textBottomMarginForSign:(id)arg1;	// IMP=0x0010000000c5421d
- (double)textTopMarginForSign:(id)arg1;	// IMP=0x0010000000c5420f
- (double)contentSideMarginForSign:(id)arg1;	// IMP=0x0010000000c54201
- (double)minimumHeightForSign:(id)arg1;	// IMP=0x0010000000c541f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

