//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface QLRoundProgressView : UIView
{
}

+ (Class)layerClass;	// IMP=0x006000000004b455
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x000000000004b6bc
@property(nonatomic) double progress;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;	// IMP=0x000000000004b47a
- (void)didMoveToWindow;	// IMP=0x000000000004b38c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004b2e9

@end

