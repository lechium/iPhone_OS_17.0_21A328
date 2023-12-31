//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSNumberFormatter, NSOperationQueue, NSTimer, SUUIClientContext, SUUICountdown, SUUICountdownViewTimerTarget, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SUUICountdownView : UIView
{
    SUUIClientContext *_clientContext;	// 8 = 0x8
    SUUICountdown *_countdown;	// 16 = 0x10
    NSTimer *_timer;	// 24 = 0x18
    SUUICountdownViewTimerTarget *_timerTarget;	// 32 = 0x20
    UILabel *_dateDescriptionLabelDay;	// 40 = 0x28
    UILabel *_dateDescriptionLabelHour;	// 48 = 0x30
    UILabel *_dateDescriptionLabelMinute;	// 56 = 0x38
    UILabel *_dateDescriptionLabelSecond;	// 64 = 0x40
    UILabel *_dateLabelDay;	// 72 = 0x48
    UILabel *_dateLabelHour;	// 80 = 0x50
    UILabel *_dateLabelMinute;	// 88 = 0x58
    UILabel *_dateLabelSecond;	// 96 = 0x60
    NSMutableArray *_dateFlapLabels;	// 104 = 0x68
    NSMutableArray *_numberFlapLabels;	// 112 = 0x70
    NSMutableArray *_numberSeparatorLabels;	// 120 = 0x78
    UIImageView *_imageView;	// 128 = 0x80
    UILabel *_numberLabel;	// 136 = 0x88
    NSNumberFormatter *_numberFormatter;	// 144 = 0x90
    NSOperationQueue *_operationQueue;	// 152 = 0x98
    double _factor;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000001a0461
@property(readonly, nonatomic) SUUICountdown *countdown; // @synthesize countdown=_countdown;
@property(readonly, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_setCountdownWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000001a03b2
- (void)_currentRemainingDays:(long long *)arg1 hours:(long long *)arg2 minutes:(long long *)arg3 seconds:(long long *)arg4;	// IMP=0x00000000001a0270
- (long long)_currentValue;	// IMP=0x00000000001a014b
- (void)_reloadFontSizes;	// IMP=0x000000000019f1c1
- (void)_reloadTimeFlapped;	// IMP=0x000000000019ea19
- (void)_reloadTime;	// IMP=0x000000000019e610
- (void)_reloadDateDescriptions:(_Bool)arg1;	// IMP=0x000000000019e140
- (void)_reloadNumberFlapped;	// IMP=0x000000000019d8f1
- (void)_reloadNumber;	// IMP=0x000000000019d724
- (void)_reload;	// IMP=0x000000000019d627
- (id)_newNumberSeparatorLabel;	// IMP=0x000000000019d52d
- (id)_newDateDescriptionLabel;	// IMP=0x000000000019d433
- (id)_newFlapLabelWithPosition:(long long)arg1;	// IMP=0x000000000019d327
- (id)_newDateLabel;	// IMP=0x000000000019d276
- (void)layoutSubviews;	// IMP=0x000000000019b4be
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000019b438
- (void)stop;	// IMP=0x000000000019b400
- (void)start;	// IMP=0x000000000019b1d7
@property(retain, nonatomic) UIImage *backgroundImage;
- (void)dealloc;	// IMP=0x000000000019b010
- (id)initWithCountdown:(id)arg1 clientContext:(id)arg2;	// IMP=0x000000000019ab5c

@end

