import { Subscription } from '@unimodules/core';
import { Notification, NotificationResponse } from './NotificationsEmitter.types';
export { Notification, NotificationResponse } from './NotificationsEmitter.types';
export declare const DEFAULT_ACTION_IDENTIFIER = "expo.modules.notifications.actions.DEFAULT";
export declare function addNotificationReceivedListener(listener: (event: Notification) => void): Subscription;
export declare function addNotificationsDroppedListener(listener: () => void): Subscription;
export declare function addNotificationResponseReceivedListener(listener: (event: NotificationResponse) => void): Subscription;
export declare function removeSubscription(subscription: Subscription): void;
export declare function removeAllListeners(): void;
