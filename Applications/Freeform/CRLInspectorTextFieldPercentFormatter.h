//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLInspectorTextFieldPercentFormatter
{
}

+ (id)sharedFormatter;	// IMP=0x0020000000556910
- (id)crlaxLocalizedDescriptionFromValue:(id)arg1;	// IMP=0x0040000000556df9
- (id)stringForObjectValue:(id)arg1;	// IMP=0x0010000000556cc6
- (id)p_clampNumber:(id)arg1 toMinimum:(id)arg2 andMaximum:(id)arg3 wasNumberClamped:(_Bool *)arg4;	// IMP=0x0010000000556bdd
- (id)p_numberScaledWithMultiplerForNumber:(id)arg1;	// IMP=0x0010000000556af0
- (id)p_numberUnscaledWithMultiplerForNumber:(id)arg1;	// IMP=0x00100000005569fb
- (id)init;	// IMP=0x00100000005569af
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000556963
- (void)p_commonInitPercentFormatter;	// IMP=0x0010000000556929

@end
