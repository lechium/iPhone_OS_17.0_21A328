//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString, PKAccountReport;

@interface PDAccountManagerAccountReportRequest : NSObject
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
    PKAccountReport *_report;	// 24 = 0x18
    unsigned long long _trigger;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000049d852
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, nonatomic) unsigned long long trigger; // @synthesize trigger=_trigger;
@property(retain, nonatomic) PKAccountReport *report; // @synthesize report=_report;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithError:(id)arg1;	// IMP=0x001000000049d5b3
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000049d573
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x001000000049d47a
- (id)requestIdentifier;	// IMP=0x001000000049d400
- (unsigned long long)requestType;	// IMP=0x001000000049d3f5
- (id)initWithAccountIdentifier:(id)arg1 report:(id)arg2 trigger:(unsigned long long)arg3;	// IMP=0x001000000049d332

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

