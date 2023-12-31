//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICDServerOperationsManager : NSObject
{
    _Bool _networkActivityIndicatorVisible;	// 8 = 0x8
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    NSOperationQueue *_backgroundOperationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000007047a
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSOperationQueue *backgroundOperationQueue; // @synthesize backgroundOperationQueue=_backgroundOperationQueue;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)_tearDownKVO;	// IMP=0x0010000000070401
- (void)_setupKVO;	// IMP=0x00100000000703a0
- (void)_setupInternalQueues;	// IMP=0x00100000000702dc
@property(nonatomic, getter=isNetworkActivityIndicatorVisible) _Bool networkActivityIndicatorVisible; // @synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000700cf
- (id)listCloudServerOperations;	// IMP=0x001000000006fa87
- (_Bool)cancelOperationsByClass:(Class)arg1;	// IMP=0x001000000006f907
- (_Bool)hasOperationsOfClass:(Class)arg1;	// IMP=0x001000000006f7d4
- (void)enumerateBackgroundOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006f65a
- (void)enumerateOperationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000006f4e0
- (void)addBackgroundOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000006f38a
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x001000000006f234
- (void)dealloc;	// IMP=0x001000000006f1f6
- (id)init;	// IMP=0x001000000006f195

@end

