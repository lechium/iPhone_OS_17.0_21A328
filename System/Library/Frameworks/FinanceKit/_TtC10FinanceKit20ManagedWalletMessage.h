//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface _TtC10FinanceKit20ManagedWalletMessage : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00000000000dedb0
- (void)didSave;	// IMP=0x00000000000dec90

// Remaining properties
@property(nonatomic, copy) NSString *body; // @dynamic body;
@property(nonatomic, copy) NSDate *creationDate; // @dynamic creationDate;
@property(nonatomic) short messageTypeValue; // @dynamic messageTypeValue;
@property(nonatomic, copy) NSString *orderFulfillmentIdentifier; // @dynamic orderFulfillmentIdentifier;
@property(nonatomic, copy) NSString *orderIdentifier; // @dynamic orderIdentifier;
@property(nonatomic, copy) NSString *orderTypeIdentifier; // @dynamic orderTypeIdentifier;
@property(nonatomic) long long priority; // @dynamic priority;
@property(nonatomic, copy) NSString *title; // @dynamic title;

@end

