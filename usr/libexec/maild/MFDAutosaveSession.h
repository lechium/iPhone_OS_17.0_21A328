//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MFDAutosaveSession : NSObject
{
    NSString *_autosaveIdentifier;	// 8 = 0x8
}

+ (id)log;	// IMP=0x00200000000662e6
- (void).cxx_destruct;	// IMP=0x0020000000066724
@property(copy, nonatomic) NSString *autosaveIdentifier; // @synthesize autosaveIdentifier=_autosaveIdentifier;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000006652c
- (id)initWithAutosaveIdentifier:(id)arg1;	// IMP=0x00100000000663c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
