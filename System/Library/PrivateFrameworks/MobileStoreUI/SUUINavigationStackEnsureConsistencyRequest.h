//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SUUINavigationStackEnsureConsistencyRequest : NSObject
{
    _Bool _operationDidComplete;	// 8 = 0x8
    long long _navigationControllerOperation;	// 16 = 0x10
}

@property(readonly, nonatomic) _Bool operationDidComplete; // @synthesize operationDidComplete=_operationDidComplete;
@property(readonly, nonatomic) long long navigationControllerOperation; // @synthesize navigationControllerOperation=_navigationControllerOperation;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030ddcc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030dd66
- (unsigned long long)hash;	// IMP=0x000000000030dd4e
- (id)initWithNavigationControllerOperation:(long long)arg1 operationDidComplete:(_Bool)arg2;	// IMP=0x000000000030dd08

@end
