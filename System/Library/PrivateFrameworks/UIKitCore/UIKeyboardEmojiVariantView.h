//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray, NSString, UIKeyboardEmojiVariantDivider;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiVariantView : UIView
{
    UIKeyboardEmojiVariantDivider *_divider;	// 8 = 0x8
    NSMutableArray *_cells;	// 16 = 0x10
    UIView *_touchForwardingView;	// 24 = 0x18
}

+ (struct CGSize)preferredContentViewSizeForKey:(id)arg1 withTraits:(id)arg2;	// IMP=0x0010000000700b38
- (void).cxx_destruct;	// IMP=0x00000000007014e6
@property(retain, nonatomic) UIView *touchForwardingView; // @synthesize touchForwardingView=_touchForwardingView;
- (id)nextResponder;	// IMP=0x0000000000701449
- (void)updateRenderConfig:(id)arg1;	// IMP=0x0000000000701375
- (_Bool)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2 phase:(long long)arg3;	// IMP=0x0000000000701363
- (_Bool)updateSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x000000000070110d
- (void)updateHighlightForSelectedVariantIndex:(long long)arg1;	// IMP=0x0000000000701050
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x0000000000700bb8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000700aca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

