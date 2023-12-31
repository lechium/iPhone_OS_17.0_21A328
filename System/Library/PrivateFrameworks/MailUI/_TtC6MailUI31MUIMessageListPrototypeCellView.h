//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class EMCachingContactStore, MISSING_TYPE, MessageListCellLayoutValues, MessageListCellLayoutValuesHelper, MessageListCellViewModel, NSString, UIBackgroundConfiguration, UIButton, UICellConfigurationState, UIListContentConfiguration;

__attribute__((visibility("hidden")))
@interface _TtC6MailUI31MUIMessageListPrototypeCellView : UIView
{
    MISSING_TYPE *chevronType;	// 8 = 0x8
    MISSING_TYPE *isEditing;	// 16 = 0x10
    MISSING_TYPE *isCompact;	// 17 = 0x11
    MISSING_TYPE *shouldAnnotateReplyOrForward;	// 18 = 0x12
    MISSING_TYPE *annotatedRelationshipType;	// 24 = 0x18
    MISSING_TYPE *layoutValuesHelper;	// 32 = 0x20
    MISSING_TYPE *viewModel;	// 40 = 0x28
    MISSING_TYPE *summary;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_disclosureButton;	// 64 = 0x40
    MISSING_TYPE *configurationState;	// 72 = 0x48
    MISSING_TYPE *contentConfiguration;	// 80 = 0x50
    MISSING_TYPE *backgroundConfiguration;	// 88 = 0x58
    MISSING_TYPE *contactStore;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_subjectLabel;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000099c60
- (void)prepareForReuse;	// IMP=0x0000000000099660
- (void)applyIndicatorPreviewChangeAction:(id)arg1;	// IMP=0x00000000000995e0
- (void)refreshForSignificantTimeChange;	// IMP=0x0000000000099590
- (void)setDisclosureEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000099510
- (void)setDisplayVIP:(_Bool)arg1;	// IMP=0x0000000000099490
- (void)setDisplayUnreadDot:(_Bool)arg1;	// IMP=0x0000000000099420
@property(nonatomic, retain) EMCachingContactStore *contactStore; // @synthesize contactStore;
@property(nonatomic, retain) UIBackgroundConfiguration *backgroundConfiguration; // @synthesize backgroundConfiguration;
@property(nonatomic, retain) UIListContentConfiguration *contentConfiguration; // @synthesize contentConfiguration;
@property(nonatomic, retain) UICellConfigurationState *configurationState; // @synthesize configurationState;
@property(nonatomic, retain) UIButton *disclosureButton;
@property(nonatomic, copy) NSString *summary;
@property(nonatomic, retain) MessageListCellViewModel *viewModel; // @synthesize viewModel;
@property(nonatomic, readonly) MessageListCellLayoutValues *layoutValues;
@property(nonatomic, retain) MessageListCellLayoutValuesHelper *layoutValuesHelper; // @synthesize layoutValuesHelper;
@property(nonatomic) long long annotatedRelationshipType; // @synthesize annotatedRelationshipType;
@property(nonatomic) _Bool shouldAnnotateReplyOrForward; // @synthesize shouldAnnotateReplyOrForward;
@property(nonatomic) _Bool compact; // @synthesize compact=isCompact;
- (_Bool)isCompact;	// IMP=0x0000000000097a10
@property(nonatomic) _Bool editing; // @synthesize editing=isEditing;
- (_Bool)isEditing;	// IMP=0x0000000000097820
@property(nonatomic) long long chevronType; // @synthesize chevronType;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000097620
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000097350

@end

