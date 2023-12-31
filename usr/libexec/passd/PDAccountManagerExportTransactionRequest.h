//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet, NSSet, NSString, NSTimeZone;

@interface PDAccountManagerExportTransactionRequest : NSObject
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    unsigned long long _trigger;	// 24 = 0x18
    NSString *_accountIdentifier;	// 32 = 0x20
    NSString *_statementIdentifier;	// 40 = 0x28
    NSString *_fileFormat;	// 48 = 0x30
    NSTimeZone *_productTimeZone;	// 56 = 0x38
    NSDate *_statementStartDate;	// 64 = 0x40
    NSDate *_statementEndDate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000049df62
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, copy, nonatomic) NSDate *statementEndDate; // @synthesize statementEndDate=_statementEndDate;
@property(readonly, copy, nonatomic) NSDate *statementStartDate; // @synthesize statementStartDate=_statementStartDate;
@property(readonly, copy, nonatomic) NSTimeZone *productTimeZone; // @synthesize productTimeZone=_productTimeZone;
@property(readonly, copy, nonatomic) NSString *fileFormat; // @synthesize fileFormat=_fileFormat;
@property(readonly, copy, nonatomic) NSString *statementIdentifier; // @synthesize statementIdentifier=_statementIdentifier;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, nonatomic) unsigned long long trigger; // @synthesize trigger=_trigger;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x001000000049dbef
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000049dbaf
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x001000000049dab6
- (id)requestIdentifier;	// IMP=0x001000000049d9e9
- (unsigned long long)requestType;	// IMP=0x001000000049d9de
- (id)initWithAccountIdentifier:(id)arg1 statementIdentifier:(id)arg2 type:(unsigned long long)arg3 trigger:(unsigned long long)arg4 statementStartDate:(id)arg5 statementEndDate:(id)arg6 fileFormat:(id)arg7 productTimeZone:(id)arg8;	// IMP=0x001000000049d885

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

