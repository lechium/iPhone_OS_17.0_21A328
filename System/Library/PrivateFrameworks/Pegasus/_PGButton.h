//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class PGButtonView;

__attribute__((visibility("hidden")))
@interface _PGButton : UIButton
{
    PGButtonView *_buttonView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000431a9
@property(nonatomic) __weak PGButtonView *buttonView; // @synthesize buttonView=_buttonView;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000043066
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;	// IMP=0x0000000000042f50
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000042f0f
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000042ece
- (void)tintColorDidChange;	// IMP=0x0000000000042e8d
- (struct CGRect)hitRect;	// IMP=0x0000000000042da6
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000042d0b

@end

