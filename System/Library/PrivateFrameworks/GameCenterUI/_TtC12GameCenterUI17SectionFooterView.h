//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, _TtC12GameCenterUI16DynamicTypeLabel;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI17SectionFooterView
{
    MISSING_TYPE *footerLabel;	// 8 = 0x8
    MISSING_TYPE *attachmentView;	// 16 = 0x10
    MISSING_TYPE *tapGestureRecognizer;	// 24 = 0x18
    MISSING_TYPE *style;	// 32 = 0x20
    MISSING_TYPE *attachment;	// 0 = 0x0
    MISSING_TYPE *labelTapAction;	// 0 = 0x0
    MISSING_TYPE *attachmentTapAction;	// 0 = 0x0
    MISSING_TYPE *separator;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000004975ae
@property(nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityFooterLabel;
@property(nonatomic, readonly) _Bool accessibilityAttachmentHasAction;
@property(nonatomic, readonly) _Bool accessibilityLabelHasAction;
- (void)prepareForReuse;	// IMP=0x0000000000495ba0
- (void)handleTapWithGestureRecognizer:(id)arg1;	// IMP=0x00000000004958eb
- (void)layoutSubviews;	// IMP=0x0000000000495839
- (struct JUMeasurements)measurementsWithFitting:(struct CGSize)arg1 in:(id)arg2;	// IMP=0x0000000000494f03
@property(nonatomic) struct UIEdgeInsets layoutMargins;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000049493d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000049472a

@end
