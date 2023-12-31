//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKFamilyMember, PKPaymentTransaction;

@interface PDPeerPaymentTransactionUserNotification
{
    PKPaymentTransaction *_paymentTransaction;	// 128 = 0x80
    PKFamilyMember *_familyMember;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000027bcc2
- (void).cxx_destruct;	// IMP=0x002000000027c02d
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(readonly, nonatomic) PKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (unsigned long long)familyNotificationType;	// IMP=0x001000000027bff4
- (id)_formattedCounterpartName;	// IMP=0x001000000027bedb
- (id)_peerPaymentNotificationType;	// IMP=0x001000000027be58
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000027bdb9
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000027bcca
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 familyMember:(id)arg3 notificationIdentifier:(id)arg4;	// IMP=0x001000000027bafd
- (id)initWithPaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 familyMember:(id)arg3;	// IMP=0x001000000027b9e4

@end

