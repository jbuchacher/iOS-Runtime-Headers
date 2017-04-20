/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSDistributedNotificationObserver : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    id /* block */  _notificationHandler;
    NSString * _notificationName;
    int  _notificationType;
    BOOL  _observing;
    id /* block */  _timeoutHandler;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (copy) id /* block */ notificationHandler;
@property (copy) id /* block */ timeoutHandler;

- (void).cxx_destruct;
- (void)_didReceiveNotification:(id)arg1;
- (void)_didTimeOut;
- (void)_invalidateTimeoutTimer;
- (void)_scheduleTimeoutTimerWithTimeout:(double)arg1;
- (void)_startObserving;
- (void)_stopObserving;
- (id)init;
- (id)initWithNotificationName:(id)arg1;
- (id)initWithNotificationName:(id)arg1 type:(int)arg2;
- (id /* block */)notificationHandler;
- (void)setNotificationHandler:(id /* block */)arg1;
- (void)setTimeoutHandler:(id /* block */)arg1;
- (id /* block */)timeoutHandler;
- (void)waitWithTimeout:(double)arg1;

@end