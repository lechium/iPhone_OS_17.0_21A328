//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKContactsChangedDeleteCommand : NSObject
{
    NSString *_contactID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000010a7b4
@property(copy, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
- (id)executeWithContext:(id)arg1;	// IMP=0x001000000010a71e
- (id)initWithContactID:(id)arg1;	// IMP=0x001000000010a6b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

