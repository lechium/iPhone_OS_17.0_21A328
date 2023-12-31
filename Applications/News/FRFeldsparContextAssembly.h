//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FRPrivateDataUpdateCoordinator, NSString;
@protocol FRFeldsparContext;

@interface FRFeldsparContextAssembly : NSObject
{
    id <FRFeldsparContext> _feldsparContext;	// 8 = 0x8
    FRPrivateDataUpdateCoordinator *_privateDataUpdateCoordinator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000081878
@property(retain, nonatomic) FRPrivateDataUpdateCoordinator *privateDataUpdateCoordinator; // @synthesize privateDataUpdateCoordinator=_privateDataUpdateCoordinator;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void)loadInRegistry:(id)arg1;	// IMP=0x0010000000080993
- (id)initWithContext:(id)arg1 privateDataUpdateCoordinator:(id)arg2;	// IMP=0x00100000000808b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

