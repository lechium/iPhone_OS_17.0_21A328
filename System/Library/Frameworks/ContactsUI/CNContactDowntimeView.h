//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSDictionary, NSTextAttachment, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactDowntimeView : UIView
{
    NSDictionary *_ab_textAttributes;	// 8 = 0x8
    long long _elements;	// 16 = 0x10
    UILabel *_downtimeLabel;	// 24 = 0x18
    NSTextAttachment *_imageAttachment;	// 32 = 0x20
}

+ (id)lockImageAttachment;	// IMP=0x00600000002916ce
- (void).cxx_destruct;	// IMP=0x000000000029168c
@property(readonly, nonatomic) NSTextAttachment *imageAttachment; // @synthesize imageAttachment=_imageAttachment;
@property(readonly, nonatomic) UILabel *downtimeLabel; // @synthesize downtimeLabel=_downtimeLabel;
@property(nonatomic) long long elements; // @synthesize elements=_elements;
@property(copy, nonatomic) NSDictionary *ab_textAttributes; // @synthesize ab_textAttributes=_ab_textAttributes;
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000000291417
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002913fa
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000002913dd
- (void)updateAttributedText;	// IMP=0x0000000000291261
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000290eb4

@end
