//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUICardKitProviderSupport/NSObject-Protocol.h>

@protocol CRCommand;

@protocol CRCommandHandling <NSObject>

@optional
- (void)handleCardCommand:(id <CRCommand>)arg1 reply:(void (^)(id <CRCommand>, NSError *))arg2;
@end
