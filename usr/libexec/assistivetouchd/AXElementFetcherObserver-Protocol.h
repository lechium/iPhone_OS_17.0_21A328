//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AXElement, AXElementFetcher, NSArray, NSDictionary;

@protocol AXElementFetcherObserver <NSObject>

@optional
- (void)fetcher:(AXElementFetcher *)arg1 mediaDidBegin:(struct __CFData *)arg2;
- (void)fetcher:(AXElementFetcher *)arg1 screenWillChange:(struct __CFData *)arg2;
- (void)fetcher:(AXElementFetcher *)arg1 applicationWasActivated:(NSDictionary *)arg2;
- (void)fetcher:(AXElementFetcher *)arg1 updateElementVisuals:(id)arg2;
- (void)fetcher:(AXElementFetcher *)arg1 nativeFocusElementDidChange:(AXElement *)arg2;
- (void)fetcher:(AXElementFetcher *)arg1 didFetchElementsForEvent:(unsigned long long)arg2 foundNewElements:(_Bool)arg3;
- (void)fetcher:(AXElementFetcher *)arg1 willFetchElementsForEvent:(unsigned long long)arg2 fromApplications:(NSArray *)arg3;
- (void)fetcher:(AXElementFetcher *)arg1 didScheduleFetchEvent:(unsigned long long)arg2;
@end

