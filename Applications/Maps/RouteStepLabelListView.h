//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RouteStepLabelListView
{
    _Bool _tableMode;	// 40 = 0x28
    _Bool _isEVStep;	// 41 = 0x29
}

+ (id)_spacingForNumberOfStrings:(unsigned long long)arg1 isEVStep:(_Bool)arg2;	// IMP=0x00400000002780df
+ (double)heightForWidth:(double)arg1 route:(id)arg2 step:(id)arg3 idiom:(long long)arg4;	// IMP=0x0010000000277faf
+ (id)colorsForStrings:(id)arg1 route:(id)arg2 step:(id)arg3 tableMode:(_Bool)arg4;	// IMP=0x0010000000277b28
+ (id)fontsForStrings:(id)arg1 route:(id)arg2 step:(id)arg3 tableMode:(_Bool)arg4;	// IMP=0x00100000002779c9
+ (id)stringsForRoute:(id)arg1 step:(id)arg2 tableMode:(_Bool)arg3 isPrinting:(_Bool)arg4;	// IMP=0x00100000002779c1
+ (id)stringsForRoute:(id)arg1 step:(id)arg2 tableMode:(_Bool)arg3;	// IMP=0x00100000002779b9
+ (id)voiceOverStringsForRoute:(id)arg1 step:(id)arg2 tableMode:(_Bool)arg3;	// IMP=0x00100000002779b1
@property(nonatomic) _Bool tableMode; // @synthesize tableMode=_tableMode;
- (void)layoutToFitSize:(struct CGSize)arg1;	// IMP=0x0010000000278a8d
- (void)setRoute:(id)arg1 step:(id)arg2 tableMode:(_Bool)arg3;	// IMP=0x00100000002784d7
- (id)initWithRoute:(id)arg1 step:(id)arg2 tableMode:(_Bool)arg3;	// IMP=0x001000000027819a
- (id)attributedStringForString:(id)arg1 inStrings:(id)arg2 forStep:(id)arg3 font:(id)arg4;	// IMP=0x0010000000277c1d

@end

