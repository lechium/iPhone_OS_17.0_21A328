//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLProgress, NSError, _TtC8Freeform8CRLAsset;

@protocol CRLMediaCompatibilityConverter <NSObject>
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) _TtC8Freeform8CRLAsset *convertedMediaData;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) CRLProgress *progress;
- (void)cancel;
- (void)convertMediaWithCompletionHandler:(void (^)(void))arg1;
@end

