//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_SGDSuggestManagerMetricsProtocol-Protocol.h"

@protocol _SGDSuggestManagerBaseProtocol <_SGDSuggestManagerMetricsProtocol>
- (void)noopWithCompletion:(void (^)(SGXPCResponse *))arg1;
- (void)keepDirty:(_Bool)arg1;
- (void)isEnabledWithCompletion:(void (^)(SGXPCResponse1 *))arg1;
@end
