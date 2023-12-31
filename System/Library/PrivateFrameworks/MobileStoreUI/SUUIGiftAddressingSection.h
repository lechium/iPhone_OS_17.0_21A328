//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SUUIGift, SUUIGiftRecipientTableViewCell, SUUIGiftTextTableViewCell, UITextView;
@protocol UITextFieldDelegate;

__attribute__((visibility("hidden")))
@interface SUUIGiftAddressingSection
{
    double _footerHeight;	// 8 = 0x8
    NSString *_footerString;	// 16 = 0x10
    SUUIGift *_gift;	// 24 = 0x18
    UITextView *_messagingTextView;	// 32 = 0x20
    SUUIGiftRecipientTableViewCell *_recipientTableViewCell;	// 40 = 0x28
    id <UITextFieldDelegate> _textFieldDelegate;	// 48 = 0x30
    double _textViewCellHeight;	// 56 = 0x38
    SUUIGiftTextTableViewCell *_messageCell;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000027da20
@property(retain, nonatomic) SUUIGiftTextTableViewCell *messageCell; // @synthesize messageCell=_messageCell;
@property(nonatomic) id <UITextFieldDelegate> textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;
@property(readonly, nonatomic) UITextView *messagingTextView; // @synthesize messagingTextView=_messagingTextView;
@property(retain, nonatomic) SUUIGift *gift; // @synthesize gift=_gift;
- (id)_textFieldTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000027d420
- (id)_recipientTableViewCell;	// IMP=0x000000000027d1de
- (id)_footerString;	// IMP=0x000000000027d082
- (id)_attributedPlaceholderWithString:(id)arg1;	// IMP=0x000000000027cf1d
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x000000000027ce88
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000027cd2e
- (long long)numberOfRowsInSection;	// IMP=0x000000000027cd23
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000027cb1c
- (void)endEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000027c965
- (void)beginEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000027c833
- (id)initWithGiftConfiguration:(id)arg1;	// IMP=0x000000000027c7ea

@end

