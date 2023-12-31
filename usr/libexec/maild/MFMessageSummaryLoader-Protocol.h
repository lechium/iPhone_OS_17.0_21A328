//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EFCancelable-Protocol.h"

@class EFFuture, MFMailMessage, NSString;

@protocol MFMessageSummaryLoader <EFCancelable>
@property(readonly, nonatomic) _Bool summaryLoaded;
@property(readonly, nonatomic) NSString *summary;
- (NSString *)requestSummaryImmediatelyFromDownloadedMessage:(MFMailMessage *)arg1 downloadIfNecessary:(_Bool)arg2;
- (void)cancelSummaryRequest;
- (EFFuture *)requestSummary;
@end

