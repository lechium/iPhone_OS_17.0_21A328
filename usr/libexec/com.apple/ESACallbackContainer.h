//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ESACallbackContainer : NSObject
{
    CDUnknownBlockType _callback;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000014f80
- (void)operationLogger:(id)arg1 didUpdateWithResult:(id)arg2;	// IMP=0x0010000000014f6e
- (id)initWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014eec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

