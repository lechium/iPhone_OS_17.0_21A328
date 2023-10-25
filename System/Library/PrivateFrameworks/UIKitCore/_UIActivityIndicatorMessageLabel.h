//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorMessageLabel : UILabel
{
    NSDictionary *_regularTextAttributes;	// 128 = 0x80
    NSDictionary *_effectiveTextAttributes;	// 136 = 0x88
}

+ (id)defaultRegularContentSizeTextAttributes;	// IMP=0x0060000000fcbdaa
- (void).cxx_destruct;	// IMP=0x0000000000fcc5a6
@property(readonly, copy, nonatomic) NSDictionary *effectiveTextAttributes; // @synthesize effectiveTextAttributes=_effectiveTextAttributes;
@property(copy, nonatomic) NSDictionary *regularTextAttributes; // @synthesize regularTextAttributes=_regularTextAttributes;
- (void)_ensureCapableOfCalculatingBaselineOffsets;	// IMP=0x0000000000fcc4eb
- (id)_validatedAttributedString:(id)arg1;	// IMP=0x0000000000fcc415
- (double)_effectiveVerticalSpacingToSpinner;	// IMP=0x0000000000fcc398
- (id)_effectiveAttributesDerivedFromRegularTextAttributes:(id)arg1;	// IMP=0x0000000000fcc212
- (void)setEffectiveTextAttributes:(id)arg1;	// IMP=0x0000000000fcc144
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000fcc0c8
- (void)setAttributedText:(id)arg1;	// IMP=0x0000000000fcbff8
- (void)setText:(id)arg1;	// IMP=0x0000000000fcbf7f
@property(readonly, nonatomic) double verticalSpacingToSpinner;
- (id)initWithRegularTextAttributes:(id)arg1;	// IMP=0x0000000000fcbe77

@end
