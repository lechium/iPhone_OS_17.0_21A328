//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@protocol MKPlaceAttributionCellButtonDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceAttributionCellButton : UIButton
{
    _Bool _highlighted;	// 8 = 0x8
    id <MKPlaceAttributionCellButtonDelegate> _buttonDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f747e
@property(nonatomic) __weak id <MKPlaceAttributionCellButtonDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
- (_Bool)isHighlighted;	// IMP=0x00000000000f7441
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000f73d4

@end

