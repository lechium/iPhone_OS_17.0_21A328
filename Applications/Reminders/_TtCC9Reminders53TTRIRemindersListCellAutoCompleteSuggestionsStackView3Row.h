//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppSupportUI/NUIContainerStackView.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtCC9Reminders53TTRIRemindersListCellAutoCompleteSuggestionsStackView3Row : NUIContainerStackView
{
    MISSING_TYPE *suggestionDelegate;	// 8 = 0x8
    MISSING_TYPE *parentStackView;	// 24 = 0x18
    MISSING_TYPE *configuration;	// 32 = 0x20
    MISSING_TYPE *titleLabel;	// 256 = 0x100
    MISSING_TYPE *secondaryLabel;	// 264 = 0x108
    MISSING_TYPE *separator;	// 272 = 0x110
    MISSING_TYPE *backgroundHighlight;	// 280 = 0x118
    MISSING_TYPE *imageView;	// 288 = 0x120
    MISSING_TYPE *leadingMargin;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x00400000005e0640
- (id)initWithArrangedSubviews:(id)arg1;	// IMP=0x00100000005e0600
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000005e05e0
- (void)layoutSubviews;	// IMP=0x00100000005e05b0
- (void)accessibilityElementDidLoseFocus;	// IMP=0x00100000005e0390
- (void)accessibilityElementDidBecomeFocused;	// IMP=0x00100000005e0360
@property(nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property(nonatomic, copy) NSString *accessibilityLabel;
- (void)didHover:(id)arg1;	// IMP=0x00100000005dfbf0
- (void)didTap:(id)arg1;	// IMP=0x00100000005dfa10
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000005df920

@end
