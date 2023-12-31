//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAccount;

@interface PDAccountAPYUpdateUserNotification
{
    PKAccount *_account;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000028ed6e
- (void).cxx_destruct;	// IMP=0x002000000028ee9f
@property(readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000028ee11
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000028ed76
- (id)_messageStringForAPY:(id)arg1 apyDidIncrease:(_Bool)arg2;	// IMP=0x001000000028ed3c
- (id)_subtitleStringForAPYDidIncrease:(_Bool)arg1;	// IMP=0x001000000028ed19
- (id)_titleString;	// IMP=0x001000000028ed03
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000028eace
- (_Bool)isValid;	// IMP=0x001000000028eac1
- (unsigned long long)notificationType;	// IMP=0x001000000028eab6
- (id)initWithAccount:(id)arg1;	// IMP=0x001000000028e9b1

@end

