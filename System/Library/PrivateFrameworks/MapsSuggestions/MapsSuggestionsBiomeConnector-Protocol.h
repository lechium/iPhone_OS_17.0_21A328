//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@protocol MapsSuggestionsBiomeConnector <MapsSuggestionsObject>
- (void)unregisterFindMyUpdates;
- (_Bool)registerForFindMyUpdatesWithHandler:(void (^)(NSArray *, NSArray *))arg1;
- (_Bool)getFindMyStreamsWithHandler:(void (^)(NSArray *, NSArray *))arg1;
- (void)unregisterSmartRepliesUpdates;
- (_Bool)registerForSmartRepliesUpdatesWithHandler:(void (^)(NSArray *, NSArray *))arg1;
- (_Bool)getSmartRepliesStreamsWithHandler:(void (^)(NSArray *, NSArray *))arg1;
@end
