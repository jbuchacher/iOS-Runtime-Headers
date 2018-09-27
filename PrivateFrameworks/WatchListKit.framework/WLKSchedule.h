/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface WLKSchedule : NSObject {
    NSString * _channelID;
    NSNumber * _cleanupTime;
    NSDictionary * _dictionary;
    NSDate * _earliestEventDate;
    NSDate * _endDate;
    NSString * _externalServiceID;
    NSDate * _latestEventDate;
    NSMutableArray * _mutableEvents;
    NSString * _serviceID;
    NSDate * _startDate;
}

@property (nonatomic, readonly, copy) NSString *channelID;
@property (nonatomic, readonly) NSNumber *cleanupTime;
@property (nonatomic, readonly, copy) NSDate *earliestEventDate;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, readonly, copy) NSArray *events;
@property (nonatomic, readonly, copy) NSString *externalServiceID;
@property (nonatomic, readonly, copy) NSDate *latestEventDate;
@property (nonatomic, readonly, copy) NSString *serviceID;
@property (nonatomic, readonly, copy) NSDate *startDate;

- (void).cxx_destruct;
- (bool)_isDate:(id)arg1 containedByDate:(id)arg2 andDate:(id)arg3;
- (id)adjacentEventsForDate:(id)arg1 fuzziness:(double)arg2;
- (id)channelID;
- (id)cleanupTime;
- (id)earliestEventDate;
- (id)endDate;
- (id)eventAfterDate:(id)arg1;
- (id)eventForDate:(id)arg1;
- (id)events;
- (id)externalServiceID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)latestEventDate;
- (void)prune;
- (id)serviceID;
- (id)startDate;

@end